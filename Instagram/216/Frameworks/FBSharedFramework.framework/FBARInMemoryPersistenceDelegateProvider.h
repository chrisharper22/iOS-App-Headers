//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBARPersistenceServiceDelegateProvider-Protocol.h>

@class NSString;

@interface FBARInMemoryPersistenceDelegateProvider : NSObject <FBARPersistenceServiceDelegateProvider>
{
    shared_ptr_5e1d7b9d _cxxDelegate;
}

+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getData;
- (void)setData:(id)arg1;
@property(readonly, nonatomic) shared_ptr_5e1d7b9d cxxDelegate; // @synthesize cxxDelegate=_cxxDelegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

