//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface EDAMAdParameters : FATObject
{
    NSString *_clientLanguage;
    NSArray *_impressions;
    NSNumber *_supportHtml;
    NSDictionary *_clientProperties;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *clientProperties; // @synthesize clientProperties=_clientProperties;
@property(retain, nonatomic) NSNumber *supportHtml; // @synthesize supportHtml=_supportHtml;
@property(retain, nonatomic) NSArray *impressions; // @synthesize impressions=_impressions;
@property(retain, nonatomic) NSString *clientLanguage; // @synthesize clientLanguage=_clientLanguage;

@end

