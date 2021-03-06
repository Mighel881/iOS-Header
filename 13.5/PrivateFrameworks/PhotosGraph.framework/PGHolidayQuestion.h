//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGSurveyQuestion.h>

@class NSDictionary, NSString;

@interface PGHolidayQuestion : PGSurveyQuestion
{
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

- (void).cxx_destruct;
- (unsigned short)state;
- (double)localFactoryScore;
- (id)entityIdentifier;
- (id)additionalInfo;
- (unsigned short)entityType;
- (unsigned short)displayType;
- (unsigned short)type;
- (id)initWithAssetUUID:(id)arg1 holidayName:(id)arg2 localizedHolidayName:(id)arg3 localFactoryScore:(double)arg4;

@end

