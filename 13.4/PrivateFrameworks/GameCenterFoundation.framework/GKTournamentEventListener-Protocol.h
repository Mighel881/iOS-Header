//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GKInvite, GKPlayer, GKTournament, GKTurnBasedMatch;

@protocol GKTournamentEventListener

@optional
- (void)localPlayerDidAcceptInviteTo:(GKTurnBasedMatch *)arg1 applicationDidBecomeActive:(_Bool)arg2;
- (void)localPlayerDidAcceptRealTimeMatchInvite:(GKInvite *)arg1 forTournament:(GKTournament *)arg2;
- (void)player:(GKPlayer *)arg1 didAcceptInviteToCustomTournament:(GKTournament *)arg2;
@end

