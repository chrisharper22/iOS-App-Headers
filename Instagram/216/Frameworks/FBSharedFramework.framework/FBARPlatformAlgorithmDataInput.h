//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBMPPlatformAlgorithmDataConsumer-Protocol.h>

@class NSString;

@interface FBARPlatformAlgorithmDataInput : NSObject <FBMPPlatformAlgorithmDataConsumer>
{
    struct shared_ptr<facebook::arservices::apple::PlatformAlgorithmDataSource> _cxxSource;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)consumePlatformAlgorithmData:(id)arg1;
@property(readonly, nonatomic) shared_ptr_6041c464 cxxSource;
- (id)init;
- (void)setCameraSLAMController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

