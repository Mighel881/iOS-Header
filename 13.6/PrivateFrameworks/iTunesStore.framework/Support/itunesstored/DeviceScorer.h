//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DeviceScorer : NSObject
{
}

+ (_Bool)_shouldEnableDeviceScoring;
+ (id)_loadURLBag;
+ (id)_hexEncodingForData:(id)arg1;
+ (_Bool)deviceScoringSupported;
- (id)_serverEndpointIdentifierForServerEndpoint:(long long)arg1;
- (void)_initDeviceScorerWithContext:(id)arg1;
- (void)deviceScoreWithNonce:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithServerEndpoint:(long long)arg1;

@end

