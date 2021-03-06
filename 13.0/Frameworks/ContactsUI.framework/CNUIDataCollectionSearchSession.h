//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNUIDataCollectionSearchSession : NSObject
{
    _Bool _pendingResults;
    _Bool _pendingSuggestionsResults;
}

+ (id)currentSession;
+ (void)end;
+ (void)begin;
@property(nonatomic) _Bool pendingSuggestionsResults; // @synthesize pendingSuggestionsResults=_pendingSuggestionsResults;
@property(nonatomic) _Bool pendingResults; // @synthesize pendingResults=_pendingResults;
- (void)didSelectResult:(id)arg1;
- (void)didFetchResultSuggested:(_Bool)arg1;
- (void)searchStringDidChange;

@end

