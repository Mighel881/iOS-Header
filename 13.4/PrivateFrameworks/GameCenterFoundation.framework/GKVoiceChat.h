//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/GKVoiceChatSessionDelegate-Protocol.h>

@class GKSession, GKVoiceChatSession, NSArray, NSString;

@interface GKVoiceChat : NSObject <GKVoiceChatSessionDelegate>
{
    NSArray *_players;
    CDUnknownBlockType _playerStateUpdateHandler;
    CDUnknownBlockType _playerVoiceChatStateDidChangeHandler;
    GKSession *_gkSession;
    GKVoiceChatSession *_gkVoiceChatSession;
}

+ (_Bool)isVoIPAllowed;
@property(retain, nonatomic) GKVoiceChatSession *gkVoiceChatSession; // @synthesize gkVoiceChatSession=_gkVoiceChatSession;
@property(retain, nonatomic) GKSession *gkSession; // @synthesize gkSession=_gkSession;
@property(copy, nonatomic) CDUnknownBlockType playerVoiceChatStateDidChangeHandler; // @synthesize playerVoiceChatStateDidChangeHandler=_playerVoiceChatStateDidChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType playerStateUpdateHandler; // @synthesize playerStateUpdateHandler=_playerStateUpdateHandler;
@property(retain, nonatomic) NSArray *players; // @synthesize players=_players;
- (id)playerIDs;
- (void)gkVoiceChatSession:(id)arg1 stateUpdate:(unsigned long long)arg2 forPeer:(id)arg3;
@property(nonatomic) float volume;
@property(nonatomic, getter=isActive) _Bool active;
@property(readonly, copy, nonatomic) NSString *name;
- (void)setMute:(_Bool)arg1 forPlayer:(id)arg2;
- (void)setPlayer:(id)arg1 muted:(_Bool)arg2;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initChat:(id)arg1 withSession:(id)arg2 players:(id)arg3;

@end

