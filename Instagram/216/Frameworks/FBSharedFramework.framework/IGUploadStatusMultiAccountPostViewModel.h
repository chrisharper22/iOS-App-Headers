//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOrderedSet, NSString;

@interface IGUploadStatusMultiAccountPostViewModel : NSObject
{
    long long _pendingCount;
    long long _successCount;
    long long _failureCount;
    long long _totalCount;
    _Bool _expanded;
    NSString *_uploadID;
    NSOrderedSet *_shares;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(readonly, copy, nonatomic) NSOrderedSet *shares; // @synthesize shares=_shares;
@property(readonly, copy, nonatomic) NSString *uploadID; // @synthesize uploadID=_uploadID;
- (id)debugDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_calculateCounts;
- (_Bool)_hasFailedShare;
- (_Bool)shouldShowRemoveButton;
- (_Bool)shouldShowRetryButton;
- (id)progressBarColor;
- (float)progressBarProgress;
- (id)overlayViewImage;
- (id)image;
- (id)statusLabelText;
- (id)initWithUploadID:(id)arg1 shares:(id)arg2 expanded:(_Bool)arg3;

@end

