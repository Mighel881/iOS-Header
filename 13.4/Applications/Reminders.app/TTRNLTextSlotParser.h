//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale;

@interface TTRNLTextSlotParser : NSObject
{
    NSLocale *_locale;
    void *_parser;
}

- (void).cxx_destruct;
@property(nonatomic) void *parser; // @synthesize parser=_parser;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (id)parseString:(id)arg1 referenceTimeZone:(id)arg2;
- (void)dealloc;
- (id)initWithLocale:(id)arg1 now:(id)arg2;

@end

