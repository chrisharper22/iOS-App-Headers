//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray;

@interface IGListSectionMap : NSObject <NSCopying>
{
    NSMapTable *_objectToSectionControllerMap;
    NSMapTable *_sectionControllerToSectionMap;
    NSMutableArray *_mObjects;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mObjects; // @synthesize mObjects=_mObjects;
@property(readonly, nonatomic) NSMapTable *sectionControllerToSectionMap; // @synthesize sectionControllerToSectionMap=_sectionControllerToSectionMap;
@property(readonly, nonatomic) NSMapTable *objectToSectionControllerMap; // @synthesize objectToSectionControllerMap=_objectToSectionControllerMap;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateUsingBlock:(CDUnknownBlockType)arg1;
- (void)updateObject:(id)arg1;
- (void)reset;
- (long long)sectionForObject:(id)arg1;
- (id)objectForSection:(long long)arg1;
- (id)sectionControllerForObject:(id)arg1;
- (void)updateWithObjects:(id)arg1 sectionControllers:(id)arg2;
- (id)sectionControllerForSection:(long long)arg1;
- (long long)sectionForSectionController:(id)arg1;
@property(readonly, nonatomic) NSArray *objects;
- (id)initWithMapTable:(id)arg1;
- (id)debugDescriptionLines;

@end

