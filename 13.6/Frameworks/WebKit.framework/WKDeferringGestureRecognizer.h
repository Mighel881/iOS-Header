//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@protocol WKDeferringGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface WKDeferringGestureRecognizer : UIGestureRecognizer
{
    struct WeakObjCPtr<id<WKDeferringGestureRecognizerDelegate>> _deferringGestureDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)shouldDeferGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)setDefaultPrevented:(_Bool)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) __weak id <WKDeferringGestureRecognizerDelegate> deferringGestureDelegate;
- (id)initWithDeferringGestureDelegate:(id)arg1;

@end

