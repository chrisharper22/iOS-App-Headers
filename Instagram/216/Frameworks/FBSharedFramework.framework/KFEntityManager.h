//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KFECSToolbox, NSMutableArray, NSSet;

@interface KFEntityManager : NSObject
{
    NSMutableArray *_entities;
    unsigned long long _nextUID;
    unsigned short _rootEntityID;
    KFECSToolbox *_toolbox;
    NSSet *_entityIDFilter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *entityIDFilter; // @synthesize entityIDFilter=_entityIDFilter;
@property(nonatomic) unsigned short rootEntityID; // @synthesize rootEntityID=_rootEntityID;
@property(retain, nonatomic) KFECSToolbox *toolbox; // @synthesize toolbox=_toolbox;
- (id)entitiesWithComponents:(id)arg1 withoutComponents:(id)arg2 respectIDFilter:(_Bool)arg3;
- (id)entitiesWithComponents:(id)arg1 withoutComponents:(id)arg2;
- (id)entitiesWithComponents:(id)arg1;
- (id)addEntity;
- (id)init;

@end
