//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TypeCheckedAbstractReader.h"

@class NSDictionary, NSMutableDictionary;

@interface TypeCheckedDictionaryReader : TypeCheckedAbstractReader
{
    NSDictionary *_dictionary;
    NSMutableDictionary *_keyPathCache;
}

- (void).cxx_destruct;
- (id)valueOfClass:(Class)arg1 forKeyPath:(id)arg2;
- (id)valueOfClass:(Class)arg1 forKey:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

