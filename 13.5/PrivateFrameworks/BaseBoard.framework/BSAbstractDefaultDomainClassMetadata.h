//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BSAbstractDefaultDomainClassMetadata : NSObject
{
    NSMutableDictionary *_propertyNameToPropertyMap;
    NSMutableDictionary *_selectorToPropertyMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *selectorToPropertyMap; // @synthesize selectorToPropertyMap=_selectorToPropertyMap;
@property(retain, nonatomic) NSMutableDictionary *propertyNameToPropertyMap; // @synthesize propertyNameToPropertyMap=_propertyNameToPropertyMap;
- (id)description;
- (id)init;

@end

