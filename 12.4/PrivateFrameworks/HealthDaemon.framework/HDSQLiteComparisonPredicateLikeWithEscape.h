//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSQLiteComparisonPredicate.h>

@class NSString;

@interface HDSQLiteComparisonPredicateLikeWithEscape : HDSQLiteComparisonPredicate
{
    NSString *_escapeCharacter;
}

@property(readonly, nonatomic) NSString *escapeCharacter; // @synthesize escapeCharacter=_escapeCharacter;
- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (id)initWithProperty:(id)arg1 value:(id)arg2 escapeCharacter:(id)arg3;

@end

