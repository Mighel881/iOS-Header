//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PARSessionDelegate-Protocol.h"

@class NSString, PARBag, PARSession;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface DDLookupQuery : NSObject <PARSessionDelegate>
{
    PARSession *_session;
    PARBag *_bag;
    NSObject<OS_dispatch_queue> *_bagQueue;
    NSObject<OS_dispatch_semaphore> *_bagSem;
}

+ (id)footerSectionForString:(id)arg1 queryId:(unsigned long long)arg2;
+ (id)dictionarySectionForString:(id)arg1 queryId:(unsigned long long)arg2;
+ (void)sectionsForString:(id)arg1 useNetwork:(_Bool)arg2 clientId:(id)arg3 queryId:(unsigned long long)arg4 selectionType:(long long)arg5 domain:(id)arg6 range:(struct _NSRange)arg7 scale:(double)arg8 handler:(CDUnknownBlockType)arg9;
+ (id)_rankFeedbackWithLocalSections:(id)arg1 remoteSections:(id)arg2 footerSection:(id)arg3;
+     // Error parsing type: v60@0:8^{__DDResult={__CFRuntimeBase=QAQ}{__DDQueryRange={__DDQueryOffset=b32b32}{__DDQueryOffset=b32b32}}{?=qq}q^{__CFArray}^{__CFString}^{__CFString}^v^{__CFDictionary}qCf}16B24@28Q36d44@?52, name: sectionsForResult:useNetwork:clientId:queryId:scale:handler:
+ (_Bool)parsecEnabled;
+ (id)sharedSession;
+ (id)feedbackListener;
- (void).cxx_destruct;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;
- (id)bag;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

