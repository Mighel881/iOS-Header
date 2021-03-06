//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDTelephoneNumberAction.h>

@interface DDCallAction : DDTelephoneNumberAction
{
}

+ (_Bool)isAvailable;
+ (id)callProvider;
- (_Bool)isEmail;
- (long long)TTYType;
- (int)interactionType;
- (id)notificationURL;
- (id)notificationIconBundleIdentifier;
- (_Bool)canBePerformedByOpeningURL;
- (void)performFromView:(id)arg1;
- (id)dialRequestWithProvider:(id)arg1;
- (id)dialRequest;
- (id)notificationTitle;
- (id)notificationTitleTargetString;
- (id)localizedName;
- (id)localizedCallStringForName:(id)arg1 usingCallRelay:(_Bool)arg2;
- (_Bool)_titleFitsInActionSheet:(id)arg1;
- (double)_systemFontSize;

@end

