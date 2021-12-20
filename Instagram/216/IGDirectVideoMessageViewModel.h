//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import "IGDirectMessageViewModelProtocol-Protocol.h"
#import "IGListDiffable-Protocol.h"
#import "IGMediaViewerSpecifierProvider-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface IGDirectVideoMessageViewModel : IGValueObject <IGListDiffable, IGDirectMessageViewModelProtocol, IGMediaViewerSpecifierProvider, NSCopying, NSCoding>
{
}

+ (void)initialize;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly) unsigned long long hash;
- (id)initWithVideo:(id)arg1 previewImage:(id)arg2 previewImageSize:(struct CGSize)arg3 messageMetadata:(id)arg4 messageCellViewModel:(id)arg5 imageURL:(id)arg6 cacheKey:(id)arg7 isInteropThread:(_Bool)arg8 supportsAggregatedMediaViewer:(_Bool)arg9 shouldBlurMedia:(_Bool)arg10;
- (id)initWithVideoMessage:(id)arg1 messageCellViewModel:(id)arg2 imageURL:(id)arg3 cacheKey:(id)arg4 isInteropThread:(_Bool)arg5 shouldBlurMedia:(_Bool)arg6;
- (id)preloadedImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

