//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFDynamicEnumerationParameter.h>

#import <WorkflowKit/WFCodableAttributeBackedParameter-Protocol.h>

@class INCodableAttribute, NSString;

@interface WFCustomIntentDynamicEnumerationParameter : WFDynamicEnumerationParameter <WFCodableAttributeBackedParameter>
{
    INCodableAttribute *_codableAttribute;
}

- (void).cxx_destruct;
@property(retain, nonatomic) INCodableAttribute *codableAttribute; // @synthesize codableAttribute=_codableAttribute;
- (Class)singleStateClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

