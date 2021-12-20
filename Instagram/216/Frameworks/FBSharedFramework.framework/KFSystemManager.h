//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/KFECSUpdatingProtocol-Protocol.h>

@class KFECSToolbox, NSMutableArray, NSString;

@interface KFSystemManager : NSObject <KFECSUpdatingProtocol>
{
    NSMutableArray *_systems;
    KFECSToolbox *_toolbox;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KFECSToolbox *toolbox; // @synthesize toolbox=_toolbox;
- (void)renderWithToolbox:(id)arg1 pass:(unsigned long long)arg2;
- (void)updateWithToolbox:(id)arg1 pass:(unsigned long long)arg2 progress:(double)arg3;
- (void)setupWithToolbox:(id)arg1 pass:(unsigned long long)arg2;
- (void)constructWithToolbox:(id)arg1 pass:(unsigned long long)arg2;
- (void)mutateWithToolbox:(id)arg1 pass:(unsigned long long)arg2;
- (void)removeSystem:(id)arg1;
- (void)addSystem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
