//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <GameCenterUI/GKExtensionHostProtocol-Protocol.h>

@class GKExtensionRemoteViewController, GKGame, NSString;

@interface GKExtensionHostContext : NSExtensionContext <GKExtensionHostProtocol>
{
    GKGame *_game;
    GKExtensionRemoteViewController *_remoteViewControllerWeak;
}

@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (void)messageFromExtension:(id)arg1;
@property(nonatomic) GKExtensionRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewControllerWeak;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

