//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardServices/SBSApplicationShortcutIcon.h>

@class NSString;

@interface SBSApplicationShortcutSystemIcon : SBSApplicationShortcutIcon
{
    long long _type;
    NSString *_systemImageName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *systemImageName; // @synthesize systemImageName=_systemImageName;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_initForSubclass;
- (id)initWithSystemImageName:(id)arg1;
- (id)initWithType:(long long)arg1;

@end

