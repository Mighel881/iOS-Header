//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PPScoredItem;

@interface PPCoalescedScoredNamedEntity : NSObject
{
    unsigned short _occurrencesInSource;
    PPScoredItem *_scoredNamedEntity;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned short occurrencesInSource; // @synthesize occurrencesInSource=_occurrencesInSource;
@property(readonly, nonatomic) PPScoredItem *scoredNamedEntity; // @synthesize scoredNamedEntity=_scoredNamedEntity;
- (id)init;
- (id)initWithScoredNamedEntity:(id)arg1 occurrencesInSource:(unsigned short)arg2;

@end

