//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGResource-Protocol.h>

@class NSSet, NSString;
@protocol IGResource;

@interface IGResourceWrapper : NSObject <IGResource>
{
    id <IGResource> _resource;
    NSSet *_addedOperationIdentifiers;
}

+ (id)resourceWithPost:(id)arg1;
- (void).cxx_destruct;
- (void)addOperationIdentifiers:(id)arg1;
- (unsigned long long)requestType;
- (id)operationIdentifiers;
- (unsigned long long)key;
- (id)initWithResource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
