//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <KeyboardServices/_KSTIUserDictionaryEntry-Protocol.h>

@class NSDate, NSString;

@interface NSManagedObject (TIUserDictionaryWordServer) <_KSTIUserDictionaryEntry>
- (void)_copyAttributeValuesFromObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *phrase; // @dynamic phrase;
@property(copy, nonatomic) NSString *shortcut; // @dynamic shortcut;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSDate *timestamp; // @dynamic timestamp;
@end

