//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData, NSString, SISchemaLocaleIdentifier;

@interface SISchemaDictationContext : PBCodable
{
    NSString *_keyboardLanguage;
    SISchemaLocaleIdentifier *_keyboardLocale;
    SISchemaLocaleIdentifier *_dictationLocale;
    SISchemaLocaleIdentifier *_userSelectedLocale;
    SISchemaLocaleIdentifier *_siriSelectedLocale;
    NSArray *_keyboardLocalesEnableds;
    NSArray *_dictationLocalesEnableds;
    NSString *_bundleId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) NSArray *dictationLocalesEnableds; // @synthesize dictationLocalesEnableds=_dictationLocalesEnableds;
@property(copy, nonatomic) NSArray *keyboardLocalesEnableds; // @synthesize keyboardLocalesEnableds=_keyboardLocalesEnableds;
@property(retain, nonatomic) SISchemaLocaleIdentifier *siriSelectedLocale; // @synthesize siriSelectedLocale=_siriSelectedLocale;
@property(retain, nonatomic) SISchemaLocaleIdentifier *userSelectedLocale; // @synthesize userSelectedLocale=_userSelectedLocale;
@property(retain, nonatomic) SISchemaLocaleIdentifier *dictationLocale; // @synthesize dictationLocale=_dictationLocale;
@property(retain, nonatomic) SISchemaLocaleIdentifier *keyboardLocale; // @synthesize keyboardLocale=_keyboardLocale;
@property(copy, nonatomic) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictationLocalesEnabledAtIndex:(unsigned long long)arg1;
- (unsigned long long)dictationLocalesEnabledCount;
- (void)addDictationLocalesEnabled:(id)arg1;
- (void)clearDictationLocalesEnabled;
- (id)keyboardLocalesEnabledAtIndex:(unsigned long long)arg1;
- (unsigned long long)keyboardLocalesEnabledCount;
- (void)addKeyboardLocalesEnabled:(id)arg1;
- (void)clearKeyboardLocalesEnabled;

@end

