		DIFF_OPT_SET(options, SUBMODULE_LOG);
		DIFF_OPT_CLR(options, SUBMODULE_LOG);
		if (!regexec_buf(word_regex, buffer->ptr + *begin,
				 buffer->size - *begin, 1, match, 0)) {
	o->found_changes = 1;

		fprintf(o->file, "%s", ecbdata->header->buf);
		fprintf(o->file, "%s%s--- %s%s%s\n",
		fprintf(o->file, "%s%s+++ %s%s%s\n",
			putc('\n', o->file);
			emit_line(o, context, reset, line, len);
			fputs("~\n", o->file);
			emit_line(o, context, reset, line, len);
		emit_line(o, diff_get_color(ecbdata->color_diff, DIFF_CONTEXT),
		width = term_columns() - options->output_prefix_length;
	if (DIFF_OPT_TST(o, SUBMODULE_LOG) &&
			(!one->mode || S_ISGITLINK(one->mode)) &&
			(!two->mode || S_ISGITLINK(two->mode))) {
				one->oid.hash, two->oid.hash,
	diff_set_mnemonic_prefix(o, "a/", "b/");
	if (DIFF_OPT_TST(o, REVERSE_DIFF)) {
		a_prefix = o->b_prefix;
		b_prefix = o->a_prefix;
	} else {
		a_prefix = o->a_prefix;
		b_prefix = o->b_prefix;
	}

		DIFF_OPT_SET(options, SUBMODULE_LOG);