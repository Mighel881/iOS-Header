//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSString;

@interface SKUIApplicationLicensePage : NSObject <NSCopying>
{
    NSString *_licenseAgreementHTML;
    NSString *_title;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *licenseAgreementHTML; // @synthesize licenseAgreementHTML=_licenseAgreementHTML;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

