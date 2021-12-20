//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KFComponentManager, KFEntityManager;
@protocol KFLoaderProtocol;

@interface KFECSToolbox : NSObject
{
    KFEntityManager *_entityManager;
    KFComponentManager *_componentManager;
    id <KFLoaderProtocol> _loader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <KFLoaderProtocol> loader; // @synthesize loader=_loader;
@property(readonly, nonatomic) __weak KFComponentManager *componentManager; // @synthesize componentManager=_componentManager;
@property(readonly, nonatomic) __weak KFEntityManager *entityManager; // @synthesize entityManager=_entityManager;
- (id)initWithEntityManager:(id)arg1 componentManager:(id)arg2 loader:(id)arg3;

@end
