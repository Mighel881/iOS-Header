//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXLayoutProcessor-Protocol.h>

@class NSString, SXLayoutOptions;
@protocol SXComponentInsertionManager;

@interface SXComponentInsertionLayoutProcessor : NSObject <SXLayoutProcessor>
{
    id <SXComponentInsertionManager> _componentInsertionManager;
    SXLayoutOptions *_layoutOptions;
}

@property(retain, nonatomic) SXLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(readonly, nonatomic) id <SXComponentInsertionManager> componentInsertionManager; // @synthesize componentInsertionManager=_componentInsertionManager;
- (void).cxx_destruct;
- (void)processLayoutTask:(id)arg1 layoutBlueprint:(id)arg2 DOMObjectProvider:(id)arg3;
- (id)initWithComponentInsertionManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

