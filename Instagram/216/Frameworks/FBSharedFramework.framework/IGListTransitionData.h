//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IGListTransitionData : NSObject
{
    NSArray *_fromObjects;
    NSArray *_toObjects;
    NSArray *_toSectionControllers;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *toSectionControllers; // @synthesize toSectionControllers=_toSectionControllers;
@property(readonly, copy, nonatomic) NSArray *toObjects; // @synthesize toObjects=_toObjects;
@property(readonly, copy, nonatomic) NSArray *fromObjects; // @synthesize fromObjects=_fromObjects;
- (id)initFromObjects:(id)arg1 toObjects:(id)arg2 toSectionControllers:(id)arg3;

@end
