//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBObjectGraphConfiguration, NSArray;

@interface FBObjectiveCGraphElement : NSObject
{
    NSArray *_namePath;
    id _object;
    FBObjectGraphConfiguration *_configuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FBObjectGraphConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id object; // @synthesize object=_object;
@property(readonly, copy, nonatomic) NSArray *namePath; // @synthesize namePath=_namePath;
- (Class)objectClass;
- (id)classNameOrNull;
- (unsigned long long)objectAddress;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)allRetainedObjects;
- (id)initWithObject:(id)arg1 configuration:(id)arg2 namePath:(id)arg3;
- (id)initWithObject:(id)arg1 configuration:(id)arg2;
- (id)initWithObject:(id)arg1;

@end

