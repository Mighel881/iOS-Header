//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKAccessPassProperties : NSObject
{
    NSString *_pairedEntityIdentifier;
    NSString *_deviceIdentifier;
}

+ (id)propertiesFromPass:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly, nonatomic) NSString *pairedEntityIdentifier; // @synthesize pairedEntityIdentifier=_pairedEntityIdentifier;
- (id)initWithPass:(id)arg1;

@end

