//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGStoriesGalleryCollageSuggestionCell, IGStoriesGalleryCompositionSuggestionCell, IGStoriesGalleryMontageSuggestionCell, IGStoriesGallerySuggestionCarouselDataSource, IGStoriesGallerySuggestionFaceDetectionUpsellCell, IGStoriesGallerySuggestionTombstoneCell, UICollectionViewCell, UIScrollView;
@protocol IGStoriesGallerySuggestionCellType;

@protocol IGStoriesGallerySuggestionCarouselDataSourceDelegate <NSObject>
- (void)suggestionCarousel:(IGStoriesGallerySuggestionCarouselDataSource *)arg1 scrollViewDidScroll:(UIScrollView *)arg2;
- (void)suggestionCarousel:(IGStoriesGallerySuggestionCarouselDataSource *)arg1 upsellCellDidTapMoreButton:(IGStoriesGallerySuggestionFaceDetectionUpsellCell *)arg2;
- (void)suggestionCarousel:(IGStoriesGallerySuggestionCarouselDataSource *)arg1 upsellCellDidTapLearnMoreButton:(IGStoriesGallerySuggestionFaceDetectionUpsellCell *)arg2;
- (void)suggestionCarousel:(IGStoriesGallerySuggestionCarouselDataSource *)arg1 upsellCellDidTapTryItButton:(IGStoriesGallerySuggestionFaceDetectionUpsellCell *)arg2;
- (void)suggestionCarousel:(IGStoriesGallerySuggestionCarouselDataSource *)arg1 tombstoneCellDidTapUndoButton:(IGStoriesGallerySuggestionTombstoneCell *)arg2;
- (void)suggestionCarousel:(IGStoriesGallerySuggestionCarouselDataSource *)arg1 tombstoneCellDidTapChangeSettingsButton:(IGStoriesGallerySuggestionTombstoneCell *)arg2;
- (void)suggestionCarousel:(IGStoriesGallerySuggestionCarouselDataSource *)arg1 suggestionCellDidTapMoreButton:(UICollectionViewCell<IGStoriesGallerySuggestionCellType> *)arg2;
- (void)suggestionCarousel:(IGStoriesGallerySuggestionCarouselDataSource *)arg1 willDisplaySuggestionCell:(UICollectionViewCell<IGStoriesGallerySuggestionCellType> *)arg2;
- (void)suggestionCarousel:(IGStoriesGallerySuggestionCarouselDataSource *)arg1 didSelectCollageSuggestionCell:(IGStoriesGalleryCollageSuggestionCell *)arg2;
- (void)suggestionCarousel:(IGStoriesGallerySuggestionCarouselDataSource *)arg1 didSelectMontageSuggestionCell:(IGStoriesGalleryMontageSuggestionCell *)arg2;
- (void)suggestionCarousel:(IGStoriesGallerySuggestionCarouselDataSource *)arg1 didSelectCompositionSuggestionCell:(IGStoriesGalleryCompositionSuggestionCell *)arg2;
@end
