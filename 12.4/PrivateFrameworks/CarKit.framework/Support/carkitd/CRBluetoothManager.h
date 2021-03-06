//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CRBluetoothManager : NSObject
{
}

+ (_Bool)hasPairedDeviceSupportingCarPlayWithAddress:(id)arg1;
+ (id)addressStringForData:(id)arg1;
- (void)connectWithBluetoothAddress:(id)arg1;
- (unsigned long long)connectedServicesCountForBluetoothAddress:(id)arg1;
- (_Bool)unpairWithBluetoothAddress:(id)arg1;
- (id)_deviceForBluetoothAddress:(id)arg1;
- (id)connectedBluetoothAddresses;
- (id)init;

@end

