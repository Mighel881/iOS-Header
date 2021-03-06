//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOLocation;

__attribute__((visibility("hidden")))
@interface MNTraceRouteSimulatorEvent : NSObject
{
    double _timestamp;
    GEOLocation *_location;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) GEOLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)description;
- (id)initWithTime:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithLocation:(id)arg1;

@end

