#pragma once

namespace cgb
{
	/** TBD
	*/
	class framebuffer_t
	{
	public:
		framebuffer_t() = default;
		framebuffer_t(const framebuffer_t&) = delete;
		framebuffer_t(framebuffer_t&&) = default;
		framebuffer_t& operator=(const framebuffer_t&) = delete;
		framebuffer_t& operator=(framebuffer_t&&) = default;
		~framebuffer_t() = default;

		static owning_resource<framebuffer_t> create(std::vector<attachment> pAttachments, std::vector<image_view> _ImageViews, uint32_t _Width, uint32_t _Height, cgb::context_specific_function<void(framebuffer_t&)> _AlterConfigBeforeCreation = {});
		static owning_resource<framebuffer_t> create(std::vector<image_view> _ImageViews, uint32_t _Width, uint32_t _Height, cgb::context_specific_function<void(framebuffer_t&)> _AlterConfigBeforeCreation = {});

	};

	using framebuffer = owning_resource<framebuffer_t>;

}