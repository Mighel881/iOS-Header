//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _HFSetContainer : NSObject
{
    id _object;
    unsigned long long _index;
    CDUnknownBlockType _comparator;
    CDUnknownBlockType _hashGenerator;
}

+ (id)containerWithObject:(id)arg1 atIndex:(unsigned long long)arg2 comparator:(CDUnknownBlockType)arg3 hashGenerator:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType hashGenerator; // @synthesize hashGenerator=_hashGenerator;
@property(copy, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

