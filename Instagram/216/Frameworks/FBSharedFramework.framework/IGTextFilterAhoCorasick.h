//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGTextFilterAlgorithmProtocol-Protocol.h>

@class IGTextFilterTrieNode, NSString;

@interface IGTextFilterAhoCorasick : NSObject <IGTextFilterAlgorithmProtocol>
{
    IGTextFilterTrieNode *_head;
}

- (void).cxx_destruct;
- (id)_findMatchesInInput:(id)arg1 exactMatch:(_Bool)arg2 shouldStopEarly:(_Bool)arg3;
- (void)_build;
- (void)_addWord:(id)arg1;
- (void)reset;
- (id)findAllMatchesInInput:(id)arg1;
- (id)findFirstMatchInInput:(id)arg1;
- (void)buildWithPatterns:(id)arg1;
@property(readonly, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (id)findAllMixedMatchesInInput:(id)arg1;
- (id)findFirstMixedMatchInInput:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

