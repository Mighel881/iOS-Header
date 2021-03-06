//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, NSUUID;

@protocol ACXDeviceConnectionDelegateProtocol <NSObject>
- (void)applicationDatabaseResyncedForDeviceWithPairingID:(NSUUID *)arg1;
- (void)applicationsUninstalled:(NSArray *)arg1 onDeviceWithPairingID:(NSUUID *)arg2;
- (void)applicationsUpdated:(NSArray *)arg1 onDeviceWithPairingID:(NSUUID *)arg2;
- (void)applicationsInstalled:(NSArray *)arg1 onDeviceWithPairingID:(NSUUID *)arg2;
- (void)updateInstallProgressForApplication:(NSString *)arg1 progress:(double)arg2 phase:(unsigned long long)arg3;
- (void)updatedInstallStateForApplicationsWithInfo:(NSDictionary *)arg1;
@end

