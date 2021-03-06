//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MPUNowPlayingMetadata : NSObject
{
    NSDictionary *_nowPlayingInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *nowPlayingInfo; // @synthesize nowPlayingInfo=_nowPlayingInfo;
@property(readonly, nonatomic, getter=isExplicitContent) _Bool explicitContent;
@property(readonly, nonatomic, getter=isAlwaysLive) _Bool alwaysLive;
@property(readonly, nonatomic, getter=isMusicApp) _Bool musicApp;
@property(readonly, nonatomic) NSString *radioStationIdentifier;
@property(readonly, nonatomic) unsigned long long persistentID;
@property(readonly, nonatomic) float playbackRate;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double elapsedTime;
@property(readonly, nonatomic) NSString *radioStationName;
@property(readonly, nonatomic) NSString *album;
@property(readonly, nonatomic) NSString *artist;
@property(readonly, nonatomic) NSString *title;
- (id)initWithMediaRemoteNowPlayingInfo:(id)arg1;

@end

