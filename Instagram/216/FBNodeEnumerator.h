//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class FBObjectiveCGraphElement, NSSet;

@interface FBNodeEnumerator : NSEnumerator
{
    NSSet *_retainedObjectsSnapshot;
    NSEnumerator *_enumerator;
    FBObjectiveCGraphElement *_object;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FBObjectiveCGraphElement *object; // @synthesize object=_object;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)nextObject;
- (id)initWithObject:(id)arg1;

@end

