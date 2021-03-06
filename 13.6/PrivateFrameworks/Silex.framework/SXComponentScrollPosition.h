//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXScrollPosition.h>

@class NSString;

@interface SXComponentScrollPosition : SXScrollPosition
{
    NSString *_componentIdentifier;
    double _relativePageOffset;
    double _canvasWidth;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) double canvasWidth; // @synthesize canvasWidth=_canvasWidth;
@property(readonly, nonatomic) double relativePageOffset; // @synthesize relativePageOffset=_relativePageOffset;
@property(readonly, copy, nonatomic) NSString *componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 exactly:(_Bool)arg2;
- (_Bool)jsonDictionaryRepresentationIsValid:(id)arg1 exactly:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithComponentIdentifier:(id)arg1 canvasWidth:(double)arg2 relativePageOffset:(double)arg3;

@end

