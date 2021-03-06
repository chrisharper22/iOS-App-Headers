//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGMessageFilterCustomDictionaryProtocol-Protocol.h"

@class NSString;
@protocol IGContentFilterDictionaryProtocol;

@interface IGMessageFilterCustomDictionary : NSObject <IGMessageFilterCustomDictionaryProtocol>
{
    id <IGContentFilterDictionaryProtocol> _dictionary;
}

- (void).cxx_destruct;
- (void)updatePatternsToBlock:(id)arg1 toUnblock:(id)arg2;
- (void)loadPatternsWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long numberOfItems;
@property(readonly, nonatomic) NSString *dictionaryId;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

