//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/REExportedValue.h>

@class NSDictionary;

@interface REExportedDictionaryValue : REExportedValue
{
    NSDictionary *_dictionary;
}

- (void).cxx_destruct;
- (id)exportedValueForKey:(id)arg1;
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)type;
- (unsigned long long)propertyCount;
- (id)dictionaryValue;
- (id)initWithDictionary:(id)arg1;

@end

