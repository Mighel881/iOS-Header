//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraSessionID, HMDCameraSnapshotLocal, HMDSnapshotFile, NSError;

@protocol HMDCameraSnapshotLocalDelegate <NSObject>
- (void)snapshotLocal:(HMDCameraSnapshotLocal *)arg1 didSaveSnapshotFile:(HMDSnapshotFile *)arg2 error:(NSError *)arg3 sessionID:(HMDCameraSessionID *)arg4;
@end

