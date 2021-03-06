//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/CRCoding-Protocol.h>
#import <ReminderKit/CRDataType-Protocol.h>

@class CRDocument, NSString;

@interface CRRegister : NSObject <CRDataType, CRCoding>
{
    CRDocument *_document;
}

+ (id)registerWithType:(unsigned long long)arg1 contents:(id)arg2 document:(id)arg3;
+ (id)registerWithType:(unsigned long long)arg1 contents:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak CRDocument *document; // @synthesize document=_document;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (id)tombstone;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)mergeWith:(id)arg1;
- (_Bool)isEqualContents:(id)arg1;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(retain, nonatomic) id contents; // @dynamic contents;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

