//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface NUVideoMetadata : NSObject
{
    _Bool _muted;
    double _playbackPosition;
    double _timePlayed;
    double _duration;
    double _volume;
    NSError *_error;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double timePlayed; // @synthesize timePlayed=_timePlayed;
@property(nonatomic) double playbackPosition; // @synthesize playbackPosition=_playbackPosition;

@end

