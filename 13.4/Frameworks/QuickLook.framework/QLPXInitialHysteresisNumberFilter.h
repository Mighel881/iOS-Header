//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLPXNumberFilter.h>

__attribute__((visibility("hidden")))
@interface QLPXInitialHysteresisNumberFilter : QLPXNumberFilter
{
    _Bool _didReachThreshold;
    double _offset;
    double _hysteresis;
}

@property(nonatomic) double hysteresis; // @synthesize hysteresis=_hysteresis;
@property(readonly, nonatomic) double outputDerivative;
- (double)updatedOutput;

@end

