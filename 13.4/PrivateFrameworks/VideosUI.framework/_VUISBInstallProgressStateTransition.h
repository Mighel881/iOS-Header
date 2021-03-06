//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUI/_VUISBIconProgressTransition.h>

@class CAMediaTimingFunction;

__attribute__((visibility("hidden")))
@interface _VUISBInstallProgressStateTransition : _VUISBIconProgressTransition
{
    double _totalElapsedTime;
    double _duration;
    CAMediaTimingFunction *_timingFunction;
    long long _fromState;
    long long _toState;
    double _fraction;
}

+ (Class)_classForTransitionFromState:(long long)arg1 toState:(long long)arg2;
+ (id)newTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (void)_updateView:(id)arg1;
- (_Bool)isCompleteWithView:(id)arg1;
- (void)completeTransitionAndUpdateView:(id)arg1;
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;
- (void)dealloc;
- (id)_initWithFromState:(long long)arg1 toState:(long long)arg2;

@end

