//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBARServiceConfiguration-Protocol.h>

@class NSString;
@protocol FBARLocationDataProviderDataSource;

@interface FBARLocationDataProviderConfiguration : NSObject <FBARServiceConfiguration>
{
    id <FBARLocationDataProviderDataSource> _dataSource;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithDataSource:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <FBARLocationDataProviderDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) struct ServiceType serviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
