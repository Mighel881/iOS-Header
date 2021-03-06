//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVMusicTrack, NSArray, NSDictionary;

@interface AVAudioSequencer : NSObject
{
    void *_impl;
}

@property(readonly, nonatomic) AVMusicTrack *tempoTrack;
- (void)setTempoTrack:(id)arg1;
- (id)trackArray;
- (void)setTrackArray:(id)arg1;
- (double)beatsForSeconds:(double)arg1;
- (double)secondsForBeats:(double)arg1;
- (id)getTempoTrack;
@property(readonly, nonatomic) NSArray *tracks;
- (id)dataWithSMPTEResolution:(long long)arg1 error:(id *)arg2;
- (_Bool)writeToURL:(id)arg1 SMPTEResolution:(long long)arg2 replaceExisting:(_Bool)arg3 error:(id *)arg4;
- (_Bool)loadFromData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)loadFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSDictionary *userInfo;
- (void)setupTracks;
- (void)setupTrackArray;
- (void)cleanTracks;
- (unsigned long long)numberOfTracks;
- (void)dealloc;
- (id)initWithImpl:(struct AVAudioSequencerImpl *)arg1;
- (id)initWithAudioEngine:(id)arg1;
- (id)init;
- (void)stop;
- (_Bool)startAndReturnError:(id *)arg1;
- (void)prepareToPlay;
- (double)beatsForHostTime:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)hostTimeForBeats:(double)arg1 error:(id *)arg2;
@property(nonatomic) float rate;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(nonatomic) double currentPositionInBeats;
@property(nonatomic) double currentPositionInSeconds;

@end

