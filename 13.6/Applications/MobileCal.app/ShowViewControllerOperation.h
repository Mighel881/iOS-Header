//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, UIViewController;
@protocol OS_dispatch_queue;

@interface ShowViewControllerOperation : NSOperation
{
    _Bool _isFinished;
    _Bool _isExecuting;
    _Bool _shouldBeModal;
    _Bool _shouldShowWithAnimation;
    NSObject<OS_dispatch_queue> *queue;
    UIViewController *_shownViewController;
    UIViewController *_parentOfShownViewController;
}

- (void).cxx_destruct;
@property(retain) UIViewController *parentOfShownViewController; // @synthesize parentOfShownViewController=_parentOfShownViewController;
@property(retain) UIViewController *shownViewController; // @synthesize shownViewController=_shownViewController;
@property _Bool shouldShowWithAnimation; // @synthesize shouldShowWithAnimation=_shouldShowWithAnimation;
@property _Bool shouldBeModal; // @synthesize shouldBeModal=_shouldBeModal;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue;
- (void)finish;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)cancel;
- (_Bool)isConcurrent;
- (void)main;
- (void)start;
- (void)doInternalPresentation;
- (id)description;
- (id)initWithViewControllerToShow:(id)arg1 toBeShownInViewController:(id)arg2 shouldBeModal:(_Bool)arg3 shouldShowWithAnimation:(_Bool)arg4;

@end

