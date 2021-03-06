//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDGestureDelegate-Protocol.h>

@class NSMutableArray, NSString, TSDInteractiveCanvasController, TSUNoCopyDictionary;

@interface TSDGestureDispatcher : NSObject <TSDGestureDelegate>
{
    TSDInteractiveCanvasController *_interactiveCanvasController;
    NSMutableArray *_simultaneitySets;
    TSUNoCopyDictionary *_priorityMap;
    _Bool _runningTargetHandleGesture;
    NSMutableArray *_gesturesInFlight;
    NSMutableArray *_targetsInFlight;
    _Bool _gestureDidFire;
}

@property(nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=_interactiveCanvasController;
- (void)p_gestureNoLongerInFlight:(id)arg1;
- (void)didReset:(id)arg1;
- (void)gestureRemovedFromView:(id)arg1;
- (_Bool)gestureActionShouldBegin:(id)arg1;
- (id)p_getGestureTarget:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)prioritizeRecognizer:(id)arg1 overRecognizer:(id)arg2;
- (void)allowSimultaneousRecognitionByRecognizers:(id)arg1;
- (_Bool)handleGesture:(id)arg1 withTarget:(id)arg2;
- (void)handleGesture:(id)arg1;
- (void)teardown;
- (void)dealloc;
- (id)initWithInteractiveCanvasController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

