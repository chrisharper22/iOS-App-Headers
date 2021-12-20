//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol FBCCUConfigurationDelegate, OS_dispatch_queue;

@interface FBAddressBookReader : NSObject
{
    id <FBCCUConfigurationDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_addressBook;
}

- (void).cxx_destruct;
- (id)addressBook;
- (void)_copyCredentialsFromRecord:(void *)arg1 toRecord:(id)arg2 onProperty:(int)arg3;
- (void)_readAddressBook;
- (void)readAddressBook;
- (id)initWithIntegrationDelegate:(id)arg1 queue:(id)arg2;

@end
